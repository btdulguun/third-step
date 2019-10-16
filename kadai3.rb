rika = [65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70]
english = [44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

puts "理科合計点 = #{rika.sum}"
puts "英語合計点 = #{english.sum}"
rika_avg = rika.sum/20
english_avg = english.sum/20
puts "理科平均点 = #{rika_avg}"
puts "英語平均点 = #{english_avg}"
sumofsqr_rika = rika.inject(0){|sum, i| sum + (i - rika_avg) ** 2 }
sumofsqr_english = english.inject(0){|sum, i| sum + (i - english_avg) ** 2 }
s2_rika = sumofsqr_rika/20
s2_english = sumofsqr_english/20
s_rika = Math.sqrt(s2_rika)
s_english = Math.sqrt(s2_english)
puts "理科標準偏差 = #{s_rika}"
puts "英語標準偏差 = #{s_english}"
