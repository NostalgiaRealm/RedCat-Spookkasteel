/*
 * FUN_0048d3ac at 0048d3ac
 * undefined1 __register FUN_0048d3ac(byte * param_1, byte * param_2)
 * Address ranges: 0048d3ac-0048d41b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0048d3d3) */

undefined1 FUN_0048d3ac(byte *param_1,byte *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 local_d;
  
  local_d = 0;
  if (((*param_1 == *param_2) &&
      (uVar2 = FUN_00409738((int *)(param_1 + 2),(int *)(param_2 + 2),(uint)*param_1 * 2),
      (char)uVar2 != '\0')) &&
     ((cVar1 = FUN_0048e148((int)param_1,*(int *)(param_2 + 0x18),extraout_ECX), cVar1 != '\0' ||
      (cVar1 = FUN_0048e148((int)param_2,*(int *)(param_1 + 0x18),extraout_ECX_00), cVar1 != '\0')))
     ) {
    local_d = 1;
  }
  return local_d;
}

