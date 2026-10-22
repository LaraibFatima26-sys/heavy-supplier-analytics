# Week 4: Product Performance & ABC Classification Analysis

heavy-supplier-analytics
## 🔗 Project Links
- 📊 **Google Sheets Live Report:** [Open Google Sheets Report](https://docs.google.com/spreadsheets/d/1LAeMD7p2UG_ugAziRPkQbiFER7puMaLyUolpg3-6ccQ/edit?gid=1064364131#gid=1064364131)
- 💻 **Google Colab Notebook:** [Open Google Colab Notebook](https://colab.research.google.com/drive/1qb-te0e02eYFvvbKWFqhctpOgpx6Mx1d#scrollTo=9yqx-U-5TpfZ)

---

## 📌 Project Summary & Results
Is Python-based project mein heavy warehouse inventory data ko analyze karke automated business insights generate kiye gaye hain:

1. **ABC Pareto Classification (80/15/5 Rule):**
   - **Class A:** Top revenue-generating items (80% revenue drivers).
   - **Class B:** Moderate performance items (next 15% revenue share).
   - **Class C:** Low-revenue / high-volume items (bottom 5% revenue).

2. **FSN Stock Movement Analysis:**
   - **Fast-Moving:** Recent sales with high quantity turnover.
   - **Slow-Moving:** Regular sales with longer reorder cycles.
   - **Dead Stock:** Zero movement or >90 days since last sale.

3. **Multi-Tab Report Structure:**
   - `Product Classification`: Item-level metrics with ABC and FSN tags.
   - `Category Performance`: Category-wise revenue share and volume.
   - `Product Movement Matrix`: Cross-tabulation of ABC classes vs FSN status.
