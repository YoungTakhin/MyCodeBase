# MyCodeBase
>  这里是各种算法的代码库，任何人可以在自己的任何程序中使用，欢迎大家指出代码中的错误以及有待改进的地方。
### 排序算法比较
<table class="myTable">
<tr>
<th rowspan="2">名称</th>
<th rowspan="2">数据对象</th>
<th rowspan="2">稳定性</th>
<th colspan="2">时间复杂度</th>
<th rowspan="2">额外空间复杂度</th>
<th rowspan="2">描述</th>
</tr>
<tr>
<th>平均</th>
<th>最坏</th>
</tr>
<tr>
<td><a href="/wiki/%E6%B0%A3%E6%B3%A1%E6%8E%92%E5%BA%8F" class="mw-redirect" title="冒泡排序">冒泡排序</a></td>
<td>数组</td>
<td>稳定</td>
<td colspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n^{2})}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:6.032ex; height:3.176ex;" alt="O(n^{2})" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(1)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e66384bc40452c5452f33563fe0e27e803b0cc21" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.745ex; height:2.843ex;" alt="O(1)" /></span></td>
<td>（无序区，有序区）。<br />
从无序区通过交换找出最大元素放到有序区前端。</td>
</tr>
<tr>
<td rowspan="2"><a href="/wiki/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F" title="选择排序">选择排序</a></td>
<td>数组</td>
<td>不稳定</td>
<td colspan="2" rowspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n^{2})}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:6.032ex; height:3.176ex;" alt="O(n^{2})" /></span></td>
<td rowspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(1)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e66384bc40452c5452f33563fe0e27e803b0cc21" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.745ex; height:2.843ex;" alt="O(1)" /></span></td>
<td rowspan="2">（有序区，无序区）。<br />
在无序区里找一个最小的元素跟在有序区的后面。对数组：比较得多，换得少。</td>
</tr>
<tr>
<td>链表</td>
<td>稳定</td>
</tr>
<tr>
<td><a href="/wiki/%E6%8F%92%E5%85%A5%E6%8E%92%E5%BA%8F" title="插入排序">插入排序</a></td>
<td>数组、链表</td>
<td>稳定</td>
<td colspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n^{2})}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:6.032ex; height:3.176ex;" alt="O(n^{2})" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(1)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e66384bc40452c5452f33563fe0e27e803b0cc21" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.745ex; height:2.843ex;" alt="O(1)" /></span></td>
<td>（有序区，无序区）。<br />
把无序区的第一个元素插入到有序区的合适的位置。对数组：比较得少，换得多。</td>
</tr>
<tr>
<td><a href="/wiki/%E5%A0%86%E6%8E%92%E5%BA%8F" title="堆排序">堆排序</a></td>
<td>数组</td>
<td>不稳定 </td>
<td colspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n\log n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/9d2320768fb54880ca4356e61f60eb02a3f9d9f1" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:10.118ex; height:2.843ex;" alt="O(n\log n)" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(1)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e66384bc40452c5452f33563fe0e27e803b0cc21" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.745ex; height:2.843ex;" alt="O(1)" /></span></td>
<td>（最大堆，有序区）。<br />
从堆顶把根卸出来放在有序区之前，再恢复堆。</td>
</tr>
<tr>
<td rowspan="3"><a href="/wiki/%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F" title="归并排序">归并排序</a></td>
<td rowspan="2">数组</td>
<td rowspan="3">稳定</td>
<td colspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n\log ^{2}n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/48c36489701bc8023db2f8d6bc809b14a7f8dd4e" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:11.172ex; height:3.176ex;" alt="{\displaystyle O(n\log ^{2}n)}" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(1)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e66384bc40452c5452f33563fe0e27e803b0cc21" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.745ex; height:2.843ex;" alt="{\displaystyle O(1)}" /></span></td>
<td rowspan="3">把数据分为两段，从两段中逐个选最小的元素移入新数据段的末尾。<br />
可从上到下或从下到上进行。</td>
</tr>
<tr>
<td colspan="2" rowspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n\log n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/9d2320768fb54880ca4356e61f60eb02a3f9d9f1" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:10.118ex; height:2.843ex;" alt="O(n\log n)" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n)+O(\log n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e88d59c95a891d8f0e161659761f8e713f3f9e02" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:16.154ex; height:2.843ex;" alt="O(n)+O(\log n)" /></span><br />
如果不是从下到上</td>
</tr>
<tr>
<td>链表</td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(1)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e66384bc40452c5452f33563fe0e27e803b0cc21" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.745ex; height:2.843ex;" alt="O(1)" /></span></td>
</tr>
<tr>
<td><a href="/wiki/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F" title="快速排序">快速排序</a></td>
<td>数组</td>
<td>不稳定</td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n\log n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/9d2320768fb54880ca4356e61f60eb02a3f9d9f1" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:10.118ex; height:2.843ex;" alt="O(n\log n)" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n^{2})}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:6.032ex; height:3.176ex;" alt="O(n^{2})" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(\log n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/aae0f22048ba6b7c05dbae17b056bfa16e21807d" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:8.336ex; height:2.843ex;" alt="O(\log n)" /></span></td>
<td>（小数，基准元素，大数）。<br />
在区间中随机挑选一个元素作基准，将小于基准的元素放在基准之前，大于基准的元素放在基准之后，再分别对小数区与大数区进行排序。</td>
</tr>
<tr>
<td><a href="/wiki/%E5%B8%8C%E5%B0%94%E6%8E%92%E5%BA%8F" title="希尔排序">希尔排序</a></td>
<td>数组</td>
<td>不稳定</td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n\log ^{2}n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/48c36489701bc8023db2f8d6bc809b14a7f8dd4e" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:11.172ex; height:3.176ex;" alt="O(n\log ^{2}n)" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n^{2})}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:6.032ex; height:3.176ex;" alt="O(n^{2})" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(1)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/e66384bc40452c5452f33563fe0e27e803b0cc21" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.745ex; height:2.843ex;" alt="O(1)" /></span></td>
<td>每一轮按照事先决定的间隔进行插入排序，间隔会依次缩小，最后一次一定要是1。</td>
</tr>

<tr>
<td><a href="/wiki/%E8%AE%A1%E6%95%B0%E6%8E%92%E5%BA%8F" title="计数排序">计数排序</a></td>
<td>数组、链表</td>
<td>稳定</td>
<td colspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n+m)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/5d103b38ce2abfde793118c89cd4fac5c956b89d" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:9.858ex; height:2.843ex;" alt="O(n+m)" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n+m)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/5d103b38ce2abfde793118c89cd4fac5c956b89d" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:9.858ex; height:2.843ex;" alt="O(n+m)" /></span></td>
<td>统计小于等于该元素值的元素的个数i，于是该元素就放在目标数组的索引i位（i≥0）。</td>
</tr>
<tr>
<td><a href="/wiki/%E6%A1%B6%E6%8E%92%E5%BA%8F" title="桶排序">桶排序</a></td>
<td>数组、链表</td>
<td>稳定</td>
<td colspan="2"><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/34109fe397fdcff370079185bfdb65826cb5565a" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:4.977ex; height:2.843ex;" alt="O(n)" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(m)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/a0ffd498cf521ce19814e6b7053f1f8ebb1d3c88" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:5.623ex; height:2.843ex;" alt="O(m)" /></span></td>
<td>将值为i的元素放入i号桶，最后依次把桶里的元素倒出来。</td>
</tr>
<tr>
<td><a href="/wiki/%E5%9F%BA%E6%95%B0%E6%8E%92%E5%BA%8F" title="基数排序">基数排序</a></td>
<td>数组、链表</td>
<td>稳定</td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(k\times n)}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/753ea58d397ba5729b620212cdeebe9601614737" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:9.029ex; height:2.843ex;" alt="O(k\times n)" /></span></td>
<td><span class="mwe-math-element"><span class="mwe-math-mathml-inline mwe-math-mathml-a11y" style="display: none;"><math xmlns="http://www.w3.org/1998/Math/MathML"  alttext="{\displaystyle O(n^{2})}">

</math></span><img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/6cd9594a16cb898b8f2a2dff9227a385ec183392" class="mwe-math-fallback-image-inline" aria-hidden="true" style="vertical-align: -0.838ex; width:6.032ex; height:3.176ex;" alt="O(n^{2})" /></span></td>
<td></td>
<td>一种多关键字的排序算法，可用桶排序实现。</td>
</tr>
</table>
均按从小到大排列<br />
k代表数值中的"数位"个数<br />
n代表数据规模<br />
m代表数据的最大值减最小值<br />