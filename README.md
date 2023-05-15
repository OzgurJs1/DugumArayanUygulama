# DugumArayanUygulama
Bu kod, bağlı liste veri yapısını oluşturan ve bu bağlı listede düğümler (node) ekleyen, düğüm arayan ve listeyi yazdıran bir programdır.

Bağlı liste veri yapısı, birbirine bağlı düğümlerden oluşan bir yapıdır. Her düğüm, bir veri elemanı (int data) ve bir sonraki düğümün adresini (struct node *next) tutar. Bu şekilde, birbirine bağlı düğümlerden oluşan zincir şeklinde bir liste oluşturulur.

Program, createNode() fonksiyonu ile yeni bir düğüm oluşturur ve insertNode() fonksiyonu ile bu düğümü bağlı listenin sonuna ekler. searchNode() fonksiyonu, bağlı listede belirtilen anahtarı (key) arar ve eğer bulunursa "Node Bulundu!" mesajı verir. Aksi halde "Node Bulunmadi!" mesajı verir. Son olarak, printList() fonksiyonu ile bağlı liste yazdırılır.

Main() fonksiyonu, bağlı listenin oluşturulması ve çağrıları içerir. İlk olarak, createNode() ve insertNode() fonksiyonları aracılığıyla, bağlı liste oluşturulur. Sonrasında, printList() fonksiyonu ile oluşturulan bağlı liste yazdırılır. En son olarak, searchNode() fonksiyonu ile bağlı listenin belirli düğümleri aranır ve sonuçları yazdırılır.
