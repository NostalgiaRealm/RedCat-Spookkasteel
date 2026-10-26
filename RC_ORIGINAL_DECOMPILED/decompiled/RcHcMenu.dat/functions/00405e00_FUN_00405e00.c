/*
 * FUN_00405e00 at 00405e00
 * undefined __register FUN_00405e00(undefined4 param_1, undefined4 param_2, VARIANTARG * param_3, VARIANTARG * param_4, ushort * param_5, uint param_6)
 * Address ranges: 00405e00-00405e90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405e00(undefined4 param_1,undefined4 param_2,VARIANTARG *param_3,VARIANTARG *param_4,
                 ushort *param_5,uint param_6)

{
  ushort uVar1;
  SAFEARRAY *psa;
  HRESULT HVar2;
  VARIANTARG *local_8;
  
  local_8 = param_3;
  if ((*param_5 & 0x2000) == 0) {
    FUN_00402874(CONCAT31((int3)((uint)param_1 >> 8),0x13));
  }
  psa = (SAFEARRAY *)FUN_00405d4c((int)param_5);
  if (psa->cDims != param_6) {
    FUN_00402874(CONCAT31((uint3)(byte)(psa->cDims >> 8),0x14));
  }
  uVar1 = *param_5;
  FUN_00404de4(param_4);
  if ((uVar1 & 0xfff) == 0xc) {
    HVar2 = SafeArrayPtrOfIndex(psa,(LONG *)&stack0x00000010,&local_8);
    if (HVar2 != 0) {
      FUN_00402874(CONCAT31((int3)((uint)HVar2 >> 8),0x14));
    }
    FUN_00404e28(param_4,local_8);
  }
  else {
    HVar2 = SafeArrayGetElement(psa,(LONG *)&stack0x00000010,(void *)((int)&param_4->n1 + 8));
    if (HVar2 != 0) {
      FUN_00402874(CONCAT31((int3)((uint)HVar2 >> 8),0x14));
    }
    (param_4->n1).n2.vt = uVar1 & 0xfff;
  }
  return;
}

