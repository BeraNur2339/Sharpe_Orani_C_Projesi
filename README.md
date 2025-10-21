# Sharpe Oranı Hesaplayıcısı: Kantitatif Analize Giriş Projesi

Bu proje, finansal piyasalardaki yatırım performansını risk-ayarlı bir şekilde değerlendirmek için kullanılan temel bir nicel ölçüt olan **Sharpe Oranını** hesaplayan basit bir konsol uygulamasının dokümantasyonudur.

Bu uygulama, yatırım kararlarının arkasındaki matematiksel prensiplere odaklanarak, **Kantitatif Analiz (Nicel Analiz)** dünyasına bir başlangıç yapmayı amaçlamaktadır.

## 📈 Kantitatif Analize Giriş

**Kantitatif Analiz (Nicel Analiz)**, finansal verileri işlemek, kalıpları belirlemek ve yatırım kararlarını desteklemek için matematiksel, istatistiksel ve hesaplamalı tekniklerin kullanıldığı bir finansal analiz dalıdır. Duygusallıktan uzak, tamamen veri odaklı bir yaklaşımdır.

Finans, risk yönetimi ve yatırım alanlarında profesyonel bir kariyer hedefleyen herkes için temel bir yetkinlik alanıdır. Sharpe Oranı, bu analizin başlangıç seviyesindeki en kritik araçlarından biridir.

## 🎯 Sharpe Oranı Nedir?

Sharpe Oranı, bir yatırımın veya portföyün **alınan risk birimi başına** ne kadar fazla getiri (risksiz oranın üzerindeki getiri) sağladığını ölçen bir performans ölçütüdür.

**Basitçe söylemek gerekirse, bize şunu söyler: Daha fazla risk alarak, risksiz bir yatırıma göre ne kadar ekstra para kazandık?**

### Formülün Mantığı

Sharpe Oranı üç temel bileşene dayanır:

1.  **Yatırım Getirisi:** Portföyünüzün toplam kazancı.
2.  **Risksiz Faiz Oranı:** Risksiz kabul edilen bir varlığın (örneğin devlet tahvili) getirisi. **(Farkları: Risk Primi)**
3.  **Standart Sapma:** Portföyün oynaklığını veya riskini gösteren istatistiksel ölçüt.

$$\text{Sharpe Oranı} = \frac{(\text{Yatırım Getirisi}) - (\text{Risksiz Faiz Oranı})}{\text{Standart Sapma}}$$

### Sharpe Oranının Yorumlanması

Genel olarak kabul gören yorumlama kriterleri şunlardır:

* **1.0'ın Üzerinde:** İyi performans (Alınan riske karşılık iyi bir ekstra getiri).
* **2.0'ın Üzerinde:** Çok İyi performans.
* **3.0'ın Üzerinde:** Mükemmel performans.
* **Sıfırın Altında:** Yatırım, risksiz faiz oranından daha az getirmiştir.

## 💻 Projenin Amacı ve İşlevi

Bu **C++ Konsol Uygulaması**, kullanıcıdan aşağıdaki üç temel veriyi alarak Sharpe Oranını hesaplar ve sonucu yorumlar:

1.  **Yatırım Getirisi (Ondalık)**
2.  **Risksiz Faiz Oranı (Ondalık)**
3.  **Standart Sapma (Ondalık)**

Proje, hem temel finansal hesaplamaları yapmak hem de C++ dilinde kullanıcıdan girdi alıp sonuçları düzgün bir şekilde biçimlendirmeyi öğrenmek için basit ve eğitici bir örnektir.
