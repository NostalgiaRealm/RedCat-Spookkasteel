/*
 * FUN_004407fc at 004407fc
 * HANDLE __register FUN_004407fc(POINT * param_1)
 * Address ranges: 004407fc-0044082a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

HANDLE FUN_004407fc(POINT *param_1)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  
  pvVar1 = FUN_00431144(param_1);
  pvVar2 = (HANDLE)0x0;
  if (pvVar1 != (HANDLE)0x0) {
    pvVar2 = (HANDLE)FUN_004360a4((int)pvVar1,param_1,0,'\0');
    if (pvVar2 == (HANDLE)0x0) {
      pvVar2 = pvVar1;
    }
  }
  return pvVar2;
}

