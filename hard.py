import string

# Frequency distribution of English characters
ENGLISH_FREQ = {
    'a': 8.05, 'b': 1.67, 'c': 2.23, 'd': 5.10, 'e': 12.22, 'f': 2.14, 'g': 2.30,
    'h': 6.62, 'i': 6.28, 'j': 0.19, 'k': 0.95, 'l': 4.08, 'm': 2.33, 'n': 6.95,
    'o': 7.63, 'p': 1.66, 'q': 0.06, 'r': 5.29, 's': 6.02, 't': 9.67, 'u': 2.92,
    'v': 0.82, 'w': 2.60, 'x': 0.11, 'y': 2.04, 'z': 0.06
}

def preprocess_text(text):
    """Preprocess the ciphertext by removing non-alphabetic characters and converting to lowercase"""
    cleaned_text = ''.join(c.lower() for c in text if c.isalpha())
    return cleaned_text

def get_letter_freq(text):
    """Calculate the frequency distribution of letters in the given text"""
    freq = {}
    for char in text:
        freq[char] = freq.get(char, 0) + 1
    total_chars = sum(freq.values())
    for char in freq:
        freq[char] /= total_chars
    return freq

def find_best_substitution(cipher_freq, english_freq):
    """Find the best substitution mapping by matching letter frequencies"""
    substitution = {}
    sorted_cipher_freq = sorted(cipher_freq.items(), key=lambda x: x[1], reverse=True)
    sorted_english_freq = sorted(english_freq.items(), key=lambda x: x[1], reverse=True)

    for cipher_char, english_char in zip(sorted_cipher_freq, sorted_english_freq):
        if cipher_char[0] not in substitution:
            substitution[cipher_char[0]] = english_char[0]

    return substitution

def apply_substitution(text, substitution):
    """Apply the substitution mapping to the given text"""
    plaintext = ''
    for char in text:
        if char in substitution:
            plaintext += substitution[char]
        else:
            plaintext += char
    return plaintext

def break_substitution_cipher(ciphertext):
    """Break the substitution cipher using frequency analysis and pattern recognition"""
    cleaned_ciphertext = preprocess_text(ciphertext)
    cipher_freq = get_letter_freq(cleaned_ciphertext)

    # Initial substitution based on frequency analysis
    substitution = find_best_substitution(cipher_freq, ENGLISH_FREQ)
    plaintext = apply_substitution(cleaned_ciphertext, substitution)

    return plaintext

# Ciphertexts
cipher1 = "af p xpkcaqvnpk pfg, af ipqe qpri, gauuikifc tpw, ceiri udvk tiki afgarxifrphni cd eao--wvmd popkwn, hiqpvri du ear jvaql vfgikrcpfgafm du cei xkafqaxnir du xrwqedearcdkw pfg du ear aopmafpcasi xkdhafmr afcd fit pkipr. ac tpr qdoudkcafm cd lfdt cepc au pfwceafm epxxifig cd ringdf eaorinu hiudki cei opceiopcaqr du cei uaing qdvng hi qdoxnicinw tdklig dvc--pfg edt rndtnw ac xkdqiigig, pfg edt odvfcpafdvr cei dhrcpqnir--ceiki tdvng pc niprc kiopaf dfi mddg oafg cepc tdvng qdfcafvi cei kiripkqe"
cipher2 = "aceah toz puvg vcdl omj puvg yudqecov, omj loj auum klu thmjuv hs klu zlcvu shv zcbkg guovz, upuv zcmdu lcz vuwovroaeu jczoyyuovomdu omj qmubyudkuj vukqvm. klu vcdluz lu loj avhqnlk aodr svhw lcz kvopuez loj mht audhwu o ehdoe eunumj, omj ck toz yhyqeoveg auecupuj, tlokupuv klu hej sher wcnlk zog, klok klu lcee ok aon umj toz sqee hs kqmmuez zkqssuj tckl kvuozqvu. omj cs klok toz mhk umhqnl shv sowu, kluvu toz oezh lcz yvhehmnuj pcnhqv kh wovpue ok. kcwu thvu hm, aqk ck zuuwuj kh lopu eckkeu ussudk hm wv. aonncmz. ok mcmukg lu toz wqdl klu zowu oz ok scskg. ok mcmukg-mcmu klug aunom kh doee lcw tuee-yvuzuvpuj; aqk qmdlomnuj thqej lopu auum muovuv klu wovr. kluvu tuvu zhwuklok zlhhr klucv luojz omj klhqnlk klcz toz khh wqdl hs o nhhj klcmn; ck zuuwuj qmsocv klok omghmu zlhqej yhzzuzz (oyyovumkeg) yuvyukqoe ghqkl oz tuee oz (vuyqkujeg) cmubloqzkcaeu tuoekl. ck tcee lopu kh au yocj shv, klug zocj. ck czm'k mokqvoe, omj kvhqaeu tcee dhwu hs ck! aqk zh sov kvhqaeu loj mhk dhwu; omj oz wv. aonncmz toz numuvhqz tckl lcz whmug, whzk yuhyeu tuvu tceecmn kh shvncpu lcw lcz hjjckcuz omj lcz nhhj shvkqmu. lu vuwocmuj hm pczckcmn kuvwz tckl lcz vueokcpuz (ubduyk, hs dhqvzu, klu zodrpceeuaonncmzuz), omj lu loj womg juphkuj ojwcvuvz owhmn klu lhaackz hs yhhv omj qmcwyhvkomk sowcecuz. aqk lu loj mh dehzu svcumjz, qmkce zhwu hs lcz ghqmnuv dhqzcmz aunom kh nvht qy. klu uejuzk hs kluzu, omj aceah'z sophqvcku, toz ghqmn svhjh aonncmz. tlum aceah toz mcmukg-mcmu lu ojhykuj svhjh oz lcz lucv, omj avhqnlk lcw kh ecpu ok aon umj; omj klu lhyuz hs klu zodrpceeu- aonncmzuz tuvu scmoeeg jozluj. aceah omj svhjh loyyumuj kh lopu klu zowu acvkljog, zuykuwauv 22mj. ghq loj aukkuv dhwu omj ecpu luvu, svhjh wg eoj, zocj aceah hmu jog; omj klum tu dom dueuavoku hqv acvkljog-yovkcuz dhwshvkoaeg khnukluv. ok klok kcwu svhjh toz zkcee cm lcz ktuumz, oz klu lhaackz doeeuj klu cvvuzyhmzcaeu ktumkcuz auktuum dlcejlhhj omj dhwcmn hs onu ok klcvkg-klvuu"