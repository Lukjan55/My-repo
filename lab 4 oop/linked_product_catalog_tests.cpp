#include "pch.h"
#include <gtest/gtest.h>
#include "product.hpp"
#include "linked_product_catalog.hpp"

class ProductCatalogTest : public ::testing::Test 
{
protected:
    void SetUp() override 
    {
        catalog = new ProductCatalog();
        catalog->addProduct(Product("Lawn mower", 25000));
        catalog->addProduct(Product("Chainsaw", 5600));
        catalog->addProduct(Product("Hedge trimmer", 3520));
        catalog->addProduct(Product("Plant care tool set", 7400));
        catalog->addProduct(Product("Brush cutter", 4800));
        catalog->addProduct(Product("Leaf blower", 3000));
    }

    void TearDown() override 
    {
        delete catalog;
    }

    ProductCatalog* catalog;
};

TEST_F(ProductCatalogTest, AddProduct) 
{
    Product newProduct("Garden Shears", 1200);
    catalog->addProduct(newProduct);

    testing::internal::CaptureStdout();
    catalog->displayProducts();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Garden Shears"), std::string::npos);
    EXPECT_NE(output.find("1200"), std::string::npos);
}

TEST_F(ProductCatalogTest, BuyProduct_Success) 
{
    bool result = catalog->buyProduct("Chainsaw");
    EXPECT_TRUE(result);

    testing::internal::CaptureStdout();
    catalog->displayProducts();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output.find("Chainsaw"), std::string::npos);

    testing::internal::CaptureStdout();
    catalog->displayCart();
    std::string cartOutput = testing::internal::GetCapturedStdout();
    EXPECT_NE(cartOutput.find("Chainsaw"), std::string::npos);
}

TEST_F(ProductCatalogTest, GetTotalCost) 
{
    catalog->buyProduct("Chainsaw");
    catalog->buyProduct("Brush cutter");

    float totalCost = catalog->getTotalCost();
    EXPECT_EQ(totalCost, 5600 + 4800);
}

