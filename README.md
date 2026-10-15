# Heavy Supplier, Inventory & Warehouse Analytics

## Week 1 & 2: Data Profiling, Quality Assessment & Sprint Report

### Executive Summary
- **Project Title:** Heavy Supplier, Inventory & Warehouse Analytics
- **Project Role:** Data Analyst (Solo Intern)
- **Programme Duration:** 12 Weeks / Sprints
- **Current Status:** Phase 1 Complete (Data Quality Assessment & Profiling Verified)

---

### Data Profiling Breakdown & Assessment Table

Total 12 transactional CSV files were analyzed for structural integrity, missing values, duplicates, and primary/foreign key relationships:

| CSV File | Total Records | Missing Values | Duplicate IDs | Key Findings |
| :--- | :--- | :--- | :--- | :--- |
| **branches.csv** | 6 | 0 | 0 | 6 active branches; clean master data |
| **customers.csv** | 500 | 0 | 0 | 500 customers; no duplicate customer IDs |
| **products.csv** | 30 | 0 | 0 | 30 heavy products across 23 attribute columns |
| **inventory_master.csv** | 180 | 0 | 0 | Unique product-branch combinations |
| **invoices.csv** | Verified | 0 | 0 (so_id) | 197 repeated invoice_id entries (indicates itemized line billing) |
| **payments.csv** | Verified | 0 | 202 (payment_id) | 3,221 repeated invoice_ids (reflects partial/installment payment behavior) |
| **purchase_orders_header.csv** | 24,000 | 2,370 (received_date) | 0 | Unreceived POs indicate active/in-transit orders |
| **purchase_orders_lines.csv** | 155,495 | 0 | 0 | Composite keys validated (`po_id` + `line_number`) |
| **sales_orders_header.csv** | 20,000 | 0 | 0 | Clean sales header records |
| **sales_orders_lines.csv** | 130,402 | 0 | 0 | Multiple line items per sales order |
| **stock_ledger.csv** | 237,230 | 0 | 0 | Complete stock movement history |
| **suppliers.csv** | 8 | 0 | 0 | 8 primary suppliers; clean master data |

---

### Key Operational Findings

1. **In-Transit Inventory & Supplier Tracking:**
   * The 2,370 Purchase Orders with null `received_date` values represent active/in-transit stock. These records will be leveraged to calculate supplier lead times and order fulfillment risks.
2. **Partial Payments & Customer Risk:**
   * High repetition of `invoice_id` in `payments.csv` confirms split-payment workflows, enabling credit risk and cash-flow analytics.
3. **Primary/Foreign Key Integrity:**
   * Referential integrity across all 12 tables is validated with no broken foreign key references across branch, customer, product, and order records.

---

### Scrum Master Sprint Notes (Week 1 & 2)

- **Sprint Goal:** Complete manual data profiling, schema validation, and set up GitHub repository structure.
- **Sprint Outcome:** 100% data health verified across all 12 CSV datasets. No critical data anomalies found.
- **Next Sprint Objectives (Sprint 2 / Week 3 & 4):**
  - Implement ABC / Pareto product classification based on inventory value.
  - Calculate Inventory Turnover Ratios across 6 branches.# heavy-supplier-analytics
End-to-end analytics project covering 12 operational datasets, data profiling, inventory management, and supplier performance.
