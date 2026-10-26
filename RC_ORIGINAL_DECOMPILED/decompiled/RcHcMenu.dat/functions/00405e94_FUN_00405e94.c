/*
 * FUN_00405e94 at 00405e94
 * undefined __register FUN_00405e94(undefined4 param_1, undefined4 param_2, undefined4 param_3, ushort * param_4, VARIANTARG * param_5, uint param_6)
 * Address ranges: 00405e94-00405f88;00405f90-00405f96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00405e94(undefined4 param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,
                 VARIANTARG *param_5,uint param_6)

{
  SAFEARRAY *psa;
  uint uVar1;
  HRESULT HVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  _union_2683 *local_18;
  _union_2683 local_14;
  
  if ((*param_4 & 0x2000) == 0) {
    FUN_00402874(CONCAT31((int3)((uint)param_1 >> 8),0x13));
  }
  psa = (SAFEARRAY *)FUN_00405d4c((int)param_4);
  if (psa->cDims != param_6) {
    FUN_00402874(CONCAT31((uint3)(byte)(psa->cDims >> 8),0x14));
  }
  uVar1 = (uint)(*param_4 & 0xfff);
  if ((uVar1 == 0xc) && ((param_5->n1).n2.vt != 0x100)) {
    HVar2 = SafeArrayPtrOfIndex(psa,(LONG *)&stack0x00000010,&local_18);
    if (HVar2 != 0) {
      FUN_00402874(CONCAT31((int3)((uint)HVar2 >> 8),0x14));
    }
    FUN_00404e28((VARIANT *)&local_18->n2,param_5);
    return;
  }
  local_14.n2.vt = 0;
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffd0;
  if (uVar1 == 0xc) {
    FUN_0040501c((VARIANTARG *)&local_14,(int)param_5);
    local_18 = &local_14;
  }
  else {
    FUN_0040503c((VARIANT *)&local_14,param_5,uVar1);
    if ((uVar1 - 8 < 2) || (uVar1 - 8 == 5)) {
      local_18 = (_union_2683 *)local_14._8_4_;
    }
    else {
      local_18 = (_union_2683 *)((int)&local_14.n2 + 8);
    }
  }
  HVar2 = SafeArrayPutElement(psa,(LONG *)&stack0x00000010,local_18);
  if (HVar2 != 0) {
    FUN_00402874(CONCAT31((int3)((uint)HVar2 >> 8),0x14));
  }
  *in_FS_OFFSET = uVar3;
  FUN_00404de4((VARIANTARG *)&local_14);
  return;
}

