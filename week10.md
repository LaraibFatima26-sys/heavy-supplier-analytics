# Week 10: Risk, Anomaly & Control Analytics

## 1. Project Overview & Deliverables
This module establishes an internal control and audit analytics engine to detect physical stock shrinkage, financial leakages, GST rate mismatches, and Purchase Order (PO) vs. Sales Order (SO) cost discrepancies across distribution centers[cite: 1, 4].

* **Full Analytics Google Doc Report:** [Click Here to View Week 10 Detailed Report](https://docs.google.com/document/d/1J2U8zGehxUZipMOjynp2897XQHtyud3sgdYFkcb8Efc/edit?usp=sharing]

---

## 2. Risk, Anomaly & Financial Leakage Audit Matrix

Below is the operational audit breakdown across primary risk domains, detection methods, financial exposure, and corrective actions[cite: 4]:

| Audit Risk Domain | Detection Methodology / Query | Flagged Incidents | Financial Exposure (INR) | Root Cause Classification | Internal Control Action |
| :--- | :---: | :---: | :---: | :--- | :--- |
| **Physical Stock Shrinkage / Loss** | Cycle Count Variance (System vs. Physical) | 142 SKUs | **₹18.4M** | Unrecorded damage & pilferage in fast-moving bays | Mandatory RFID/barcode scans & dock CCTV audits[cite: 4]. |
| **GST Rate Mismatch** | PO vs. Master Tax Schedule Rate Comparison | 86 PO Lines | **₹6.2M** | Misclassification (18% applied vs. 28% slab) | Automated ERP HSN/GST validation rules[cite: 4]. |
| **PO-SO Unit Cost Discrepancy** | Negative Margin Query ($Unit Cost > Unit Price$) | 29 Orders | **₹4.1M** | Outdated price master list during bulk orders | Hard margin floor approvals in billing system[cite: 4]. |
| **Duplicate / Phantom Invoicing** | Same Vendor + Amount + Date Query | 12 Invoices | **₹11.8M** | Re-submission of pending PO payment invoices | Automated 3-way matching gate control[cite: 4]. |
| **Phantom Receiving Shortage** | GRN Quantity > Physical Putaway Log | 34 Inbound POs | **₹9.5M** | Dock congestion & hasty receiving sign-offs | Weight-scale automated GRN receipt logs[cite: 4]. |

---

## 3. Core Audit SQL Queries & Anomaly Logic

### 1. GST Tax Rate Mismatch Query
Identifies purchase order lines where applied tax rates deviate from standard HSN tax master schedules[cite: 4]:

```sql
SELECT 
    po.po_id, 
    po.line_number, 
    po.product_id, 
    po.gst_rate AS applied_gst_rate, 
    tax.standard_gst_rate,
    ABS(po.gst_rate - tax.standard_gst_rate) AS tax_variance
FROM purchase_orders_lines po
JOIN hsn_tax_master tax ON po.product_id = tax.product_id
WHERE po.gst_rate <> tax.standard_gst_rate;
