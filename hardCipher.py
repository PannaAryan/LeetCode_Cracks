from collections import Counter

def decrypt_substitution_cipher(ciphertext):
    # Frequency analysis
    char_freq = Counter(ciphertext.replace(' ', '').lower())
    total_chars = sum(char_freq.values())
    sorted_freq = sorted([(char, freq / total_chars) for char, freq in char_freq.items()], key=lambda x: x[1], reverse=True)

    # Manual mapping for common characters
    char_map = {
        sorted_freq[0][0]: 'e',
        sorted_freq[1][0]: 't',
        sorted_freq[2][0]: 'a',
        sorted_freq[3][0]: 'o',
        sorted_freq[4][0]: 'i',
        sorted_freq[5][0]: 'n',
        sorted_freq[6][0]: 's',
        sorted_freq[7][0]: 'h',
        sorted_freq[8][0]: 'r',
    }

    # Manual adjustments based on patterns and context
    plaintext = ''.join([char_map.get(char, char) for char in ciphertext.lower()])
    print("Initial decryption:", plaintext)

    while True:
        print("\nCurrent decryption:", plaintext)
        print("Character mapping:", char_map)

        user_input = input("Enter a substitution (e.g., 'x=y') or 'done' to finish: ")
        if user_input.lower() == 'done':
            break

        try:
            cipher_char, plain_char = user_input.split('=')
            char_map[cipher_char.lower()] = plain_char.lower()
            plaintext = ''.join([char_map.get(char, char) for char in ciphertext.lower()])
        except ValueError:
            print("Invalid input. Please try again.")

    return plaintext

# Cipher-1
cipher1 = "af p xpkcaqvnpk pfg, af ipqe qpri, gauuikifc tpw, ceiri udvk tiki afgarxifrphni cd eao--wvmd popkwn, hiqpvri du ear jvaql vfgikrcpfgafm du cei xkafqaxnir du xrwqedearcdkw pfg du ear aopmafpcasi xkdhafmr afcd fit pkipr. ac tpr qdoudkcafm cd lfdt cepc au pfwceafm epxxifig cd ringdf eaorinu hiudki cei opceiopcaqr du cei uaing qdvng hi qdoxnicinw tdklig dvc--pfg edt rndtnw ac xkdqiigig, pfg edt odvfcpafdvr cei dhrcpqnir--ceiki tdvng pc niprc kiopaf dfi mddg oafg cepc tdvng qdfcafvi cei kiripkqe"
print("\nCipher-1 decryption:")
plaintext1 = decrypt_substitution_cipher(cipher1)
print("\nFinal decryption:", plaintext1)

# Cipher-2
cipher2 = "aceah toz puvg vcdl omj puvg yudqecov, omj loj auum klu thmjuv hs klu zlcvu shv zcbkg guovz, upuv zcmdu lcz vuwovroaeu jczoyyuovomdu omj qmubyudkuj vukqvm. klu vcdluz lu loj avhqnlk aodr svhw lcz kvopuez loj mht audhwu o ehdoe eunumj, omj ck toz yhyqeoveg auecupuj, tlokupuv klu hej sher wcnlk zog, klok klu lcee ok aon umj toz sqee hs kqmmuez zkqssuj tckl kvuozqvu. omj cs klok toz mhk umhqnl shv sowu, kluvu toz oezh lcz yvhehmnuj pcnhqv kh wovpue ok. kcwu thvu hm, aqk ck zuuwuj kh lopu eckkeu ussudk hm wv. aonncmz. ok mcmukg lu toz wqdl klu zowu oz ok scskg. ok mcmukg-mcmu klug aunom kh doee lcw tuee-yvuzuvpuj; aqk qmdlomnuj thqej lopu auum muovuv klu wovr. kluvu tuvu zhwu klok zlhhr klucv luojz omj klhqnlk klcz toz khh wqdl hs o nhhj klcmn; ck zuuwuj qmsocv klok omghmu zlhqej yhzzuzz (oyyovumkeg) yuvyukqoe jhqkl oz tuee oz (vuyqkujeg) cmubloqzkcaeu tuoekl. ck tcee lopu kh au yocj shv, klug zocj. ck czm'k mokqvoe, omj kvhqaeu tcee dhwu hs ck! aqk zh sov kvhqaeu loj mhk dhwu; omj oz wv. aonncmz toz numuvhqz tckl lcz whmug, whzk yuhyeu tuvu tceecmn kh shvncpu lcw lcz hjjckcuz omj lcz nhhj shvkqmu. lu vuwocmuj hm pczckcmn kuvwz tckl lcz vueokcpuz (ubduyk, hs dhqvzu, klu zodrpceeu-aonncmzuz), omj lu loj womg juphkuj ojwcvuvz owhmn klu lhaackz hs yhhv omj qmcwyhvkomk sowcecuz. aqk lu loj mh dehzu svcumjz, qmkce zhwu hs lcz ghqmnuv dhqzcmz aunom kh nvht qy. klu uejuzk hs kluzu, omj aceah'z sophqvcku, toz ghqmn svhjh aonncmz. tlum aceah toz mcmukg-mcmu lu ojhykuj svhjh oz lcz lucv, omj avhqnlk lcw kh ecpu ok aon umj; omj klu lhyuz hs klu zodrpceeu- aonncmzuz tuvu scmoeeg jozluj. aceah omj svhjh loyyumuj kh lopu klu zowu acvkljog, zuykuwauv 22mj. ghq loj aukkuv dhwu omj ecpu luvu, svhjh wg eoj, zocj aceah hmu jog; omj klum tu dom dueuavoku hqv acvkljog-yovkcuz dhwshvkoaeg khnukluv. ok klok kcwu svhjh toz zkcee cm lcz ktuumz, oz klu lhaackz doeeuj klu cvvuzyhmzcaeu ktumkcuz auktuum dlcejlhhj omj dhwcmn hs onu ok klcvkg-klvuu"
print("\nCipher-2 decryption:")
plaintext2 = decrypt_substitution_cipher(cipher2)
print("\nFinal decryption:", plaintext2)