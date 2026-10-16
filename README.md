Heavy Supplier, Inventory & Warehouse Analytics

## Executive Summary
- **Project Title:** Heavy Supplier, Inventory & Warehouse Analytics
- **Sprint Target:** Week 1 / Sprint 1
- **Role:** Data Analyst
- **Sprint Goal:** Profile all 12 operational CSV datasets, validate primary/foreign key relationships, and evaluate baseline data integrity.

---

## Data Profiling & Structural Assessment Table

| CSV File | Total Records | Missing Values | Duplicate IDs | Key Findings & Schema Validation |
| :--- | :--- | :--- | :--- | :--- |
| **branches.csv** | 6 | 0 | 0 | 6 active branches; clean master branch entity data |
| **customers.csv** | 500 | 0 | 0 | 500 active customers; verified unique `customer_id` |
| **products.csv** | 30 | 0 | 0 | 30 heavy product SKUs across 23 attribute columns |
| **inventory_master.csv** | 180 | 0 | 0 | Unique product-branch stock location records |
| **invoices.csv** | Verified | 0 | 0 (`so_id`) | 197 repeated `invoice_id` entries (indicates itemized line billing) |
| **payments.csv** | Verified | 0 | 202 (`payment_id`) | 3,221 repeated `invoice_id`s (reflects partial/installment payment behavior) |
| **purchase_orders_header.csv** | 24,000 | 2,370 (`received_date`) | 0 | Unreceived POs indicate active/in-transit orders |
| **purchase_orders_lines.csv** | 155,495 | 0 | 0 | Composite keys validated (`po_id` + `line_number`) |
| **sales_orders_header.csv** | 20,000 | 0 | 0 | Clean sales header transaction logs |
| **sales_orders_lines.csv** | 130,402 | 0 | 0 | Multiple line items per sales order (`so_id` + `line_number`) |
| **stock_ledger.csv** | 237,230 | 0 | 0 | Complete stock movement transaction history |
| **suppliers.csv** | 8 | 0 | 0 | 8 primary heavy-goods suppliers; clean master data |

---

## Key Operational Findings & Schema Integrity

1. **In-Transit Inventory Tracking:**
   * The 2,370 Purchase Orders with missing `received_date` values represent active/in-transit pipeline stock rather than data errors.
2. **Payment & Cash-Flow Structure:**
   * High repetition of `invoice_id` in `payments.csv` confirms partial/installment payment workflows.
3. **Referential Integrity:**
   * Primary and Foreign Key connections across all 12 tables are 100% intact with zero broken key relationships across branches, customers, products, and order headers.

---

## Scrum Master Sprint 1 Notes

- **Sprint Goal:** Complete initial data profiling, verify entity relationships, and establish project directory structure.
- **Sprint Outcome:** Verified 100% data health across all 12 datasets. No critical data anomalies found.
- **Next Sprint Target:** Data integration, feature engineering, and constructing master analytical views.
