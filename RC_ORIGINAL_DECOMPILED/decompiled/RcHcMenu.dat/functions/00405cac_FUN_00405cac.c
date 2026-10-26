/*
 * FUN_00405cac at 00405cac
 * undefined __register FUN_00405cac(LONG * param_1, uint param_2, undefined4 param_3, VARIANTARG * param_4)
 * Address ranges: 00405cac-00405d48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405cac(LONG *param_1,uint param_2,undefined4 param_3,VARIANTARG *param_4)

{
  SAFEARRAY *pSVar1;
  SAFEARRAYBOUND *pSVar2;
  UINT UVar3;
  SAFEARRAYBOUND local_20c [64];
  UINT local_c;
  undefined4 local_8;
  
  local_8 = param_3;
  if (((param_2 & 1) == 0) || (0x7f < (int)param_2)) {
    FUN_00402874(CONCAT31((int3)((uint)param_1 >> 8),0x12));
  }
  UVar3 = (int)(param_2 + 1) >> 1;
  if ((int)UVar3 < 0) {
    UVar3 = UVar3 + ((param_2 + 1 & 1) != 0);
  }
  local_c = UVar3;
  if (-1 < (int)(UVar3 - 1)) {
    pSVar2 = local_20c;
    do {
      pSVar2->lLbound = *param_1;
      pSVar2->cElements = (param_1[1] - pSVar2->lLbound) + 1;
      param_1 = param_1 + 2;
      pSVar2 = pSVar2 + 1;
      UVar3 = UVar3 - 1;
    } while (UVar3 != 0);
  }
  pSVar1 = SafeArrayCreate((VARTYPE)local_8,local_c,local_20c);
  if (pSVar1 == (SAFEARRAY *)0x0) {
    FUN_00402874(0x12);
  }
  FUN_00404de4(param_4);
  (param_4->n1).n2.vt = (ushort)local_8 | 0x2000;
  *(SAFEARRAY **)((int)&param_4->n1 + 8) = pSVar1;
  return;
}

