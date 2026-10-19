# 42 Ecole Projeleri
42 Ecole ana eğitiminde C ile yaptığım projeler.

## libft
C standart kütüphanesindeki bazı fonksiyonları kendim yeniden yazdığım kütüphane. 34 temel fonksiyon (string işlemleri, bellek işlemleri, karakter kontrolleri, `ft_split`, `ft_itoa` gibi) ve bonus kısmında 9 bağlı liste (linked list) fonksiyonu içeriyor.

Derleme: `make` (bonus için `make bonus`), çıktı: `libft.a`

## get_next_line
Bir dosyadan her çağrıldığında bir sonraki satırı okuyup döndüren fonksiyon. Okuma `BUFFER_SIZE` kadar parçalarla yapılıyor, kalan kısım bir sonraki çağrı için static değişkende saklanıyor. Bonus kısmında aynı anda birden fazla dosyadan okuma destekleniyor.

## ft_printf
`printf` fonksiyonunun kendi versiyonu (`%c %s %p %d %i %u %x %X %%`). Not: Bu klasördeki sürüm çerçevesi yapılmış ancak tamamlanmamış bir taslaktır.

## born2beroot
Sanal makinede sunucu kurulumu ve yapılandırması (sistem yönetimi) projesi. Klasörde kurulum notlarım ve değerlendirme dokümanı bulunuyor.