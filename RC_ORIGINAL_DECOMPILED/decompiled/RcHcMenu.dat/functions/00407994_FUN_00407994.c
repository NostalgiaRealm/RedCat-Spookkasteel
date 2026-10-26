/*
 * FUN_00407994 at 00407994
 * undefined __register FUN_00407994(undefined4 param_1)
 * Address ranges: 00407994-004079c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00407994(undefined4 param_1)

{
  undefined *puVar1;
  
  DAT_0056f10c = GetModuleHandleA((LPCSTR)0x0);
  puVar1 = &DAT_0056f108;
  DAT_0056f110 = 0;
  DAT_0056f114 = 0;
  DAT_005734dc = DAT_0056f10c;
  FUN_00407948();
  FUN_00403b34(param_1,(int)puVar1);
  return;
}

