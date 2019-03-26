# Termin 1 - Dateien, Verzeichnisse und die Unix Shell

## Definition Dateien / Dateisystemen

Aus [Wikipedia](https://de.wikipedia.org/wiki/Datei):

>  Eine Datei (englisch file) ist ein Bestand meist inhaltlich __zusammengehöriger Daten__, der auf einem __Datenträger oder Speichermedium__ gespeichert ist. Diese Daten können somit über die Laufzeit eines Programms hinaus existieren und werden als __persistent__ bezeichnet – sie sind bei Programmende nicht verloren.
>
> In der elektronischen Datenverarbeitung ist der Inhalt jeder Datei zunächst eine __eindimensionale Aneinanderreihung von Bits__, die normalerweise in __Byte-Blöcken__ zusammengefasst interpretiert werden. Erst der Anwender einer Datei bzw. ein Anwendungsprogramm oder das Betriebssystem selbst interpretieren diese Bit- oder Bytefolge beispielsweise als einen Text, ein ausführbares Programm, ein Bild oder eine Tonaufzeichnung. Eine Datei besitzt also ein Dateiformat.
>
> [...]
>
> Dateien werden in den meisten Betriebssystemen über __Dateisysteme__ verwaltet. Ein Dateisystem verwaltet das Speichermedium, indem in Listen vermerkt wird, welche Bereiche des Mediums durch welche Dateien belegt sind, welche Bereiche frei sind, sowie oft Protokolle zu geplanten und/oder abgeschlossenen Änderungen.
>
> Obwohl eine Aufgabe des Dateisystems darin besteht, vom konkreten Medium zu abstrahieren („alle gleich zu behandeln“), sind doch viele Dateisysteme an die üblichen technischen Eigenschaften der Speichermedien angepasst (z. B. Blockgröße 512 Byte für Festplatten).
>
> Für die meisten Dateisysteme ist 1 Byte die kleinste Verwaltungseinheit, d. h., die Länge des Dateiinhalt-Bitstroms muss auf ganze Bytes aufgehen (wobei im Allgemeinen auch 0 Byte = 0 Bit erlaubt sind).
>
> Das Dateisystem verwaltet neben __Verzeichnissen__ mit Dateinamen und -speicherort fast immer noch weitere Dateiattribute. Zu diesen gehören häufig der Dateityp (Verzeichnis, normale Datei, spezielle Datei), die Dateigröße (Anzahl der Bytes in der Datei), Schreib- und Leserechte, Zeitstempel („Datum“, der Erzeugung, des letzten Zugriffs und der letzten Änderung) sowie gegebenenfalls noch andere Informationen. Eine Datei kann in vielen Dateisystemen durch ein Attribut als versteckte Datei gekennzeichnet werden.
>
> Die in Dateinamen verwendbaren Zeichen sind abhängig von Dateisystem, Betriebssystem und gegebenenfalls Sprachoptionen. Bei Unix-kompatiblen Dateisystemen dürfen in einem Dateinamen kein Schrägstrich („/“) und kein Nullzeichen stehen, ferner ist die Länge des Dateinamens auf 255 Zeichen begrenzt. Die Zeichen können unterschiedlich codiert sein. Neuere Betriebssysteme unterstützen auch Unicode.

Wir beschäftigen uns in dieser Lehrveranstaltungen mit Dateisystemen und werden uns diesen heute Kommandozeilen-orientiert nähern.

## Terminal und BASH (Bourne again SHell)

*  Klassische Computersysteme wurden über Text-basierte Terminals bedient
*  Heute haben wir meist grafische Benutzeroberflächen
*  Terminalemulatoren wie `xterm` bieten die Möglichkeitz zur Ausführung Text-basierter Programme