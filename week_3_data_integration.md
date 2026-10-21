# Heavy Supplier, Inventory & Warehouse Analytics — Week 3: Data Integration

## Project Overview
This project focuses on consolidating sales and purchase transaction data into a single, structured analytical layer. By integrating `sales_orders_lines` and `purchase_orders_lines`, this dataset provides unified financial metrics across revenue, procurement costs, tax liabilities, and profit margins.

---

## 📊 Live Dataset
- **Google Sheets Link:** [https://docs.google.com/spreadsheets/d/1TPHA0hxMJdIk8zi0tqu4-OPltBBLqnvxK8zZMxlTCKM/edit?gid=319800395#gid=319800395]

---

## 🛠️ Key Implementation & Business Logic

### 1. Data Integration (Consolidation)
- Consolidated both **Sales Orders** and **Purchase Orders** within a single master dataset.
- Added a `Transaction_Type` indicator to distinguish between `Sales` and `Purchase` records.

### 2. Standardized Calculations & Formulas
Applied uniform formulas across all records to calculate core monetary metrics:

- **Calculated Base Value (`Calculated_Base`):**
  $$\text{Quantity} \times \text{Unit Price / Unit Cost}$$
  *Formula:* `=Quantity * Unit_Price`

- **Calculated GST Amount (`Calculated_GST`):**
  $$\text{Base Value} \times \left(\frac{\text{GST Rate}}{100}\right)$$
  *Formula:* `=Calculated_Base * (GST_Rate / 100)`

- **Calculated Total Order Value (`Calculated_Total`):**
  $$\text{Base Value} + \text{GST Amount}$$
  *Formula:* `=Calculated_Base + Calculated_GST`

- **Gross Margin Amount (`Gross_Margin_Amount`):**
  - **Sales Records:** $\text{Base Value} - (\text{Quantity} \times \text{Unit Cost})$
  - **Purchase Records:** Set to `0` *(Procurement represents cost/expense, hence zero gross margin)*.

---

## 📈 Results & Impact
1. **Single Source of Truth:** Successfully resolved schema misalignments between sales and procurement files.
2. **Automated Calculations:** Eliminated manual arithmetic errors by implementing dynamic formulas (`#REF!` and `#VALUE!` errors resolved).
3. **Analytics-Ready Schema:** Prepared the master dataset for downstream reporting, Pivot Tables, and visual dashboards for inventory and supplier analytics.
