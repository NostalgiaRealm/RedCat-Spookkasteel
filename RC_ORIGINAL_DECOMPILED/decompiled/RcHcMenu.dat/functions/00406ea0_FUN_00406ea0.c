/*
 * FUN_00406ea0 at 00406ea0
 * undefined4 __register FUN_00406ea0(undefined * param_1)
 * Address ranges: 00406ea0-00406ed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00406ea0(undefined *param_1)

{
  char cVar1;
  uint uVar2;
  uint3 extraout_var;
  
  if ((*(int *)(param_1 + 4) == 0xd7b1) && (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 0x10))) {
    uVar2 = (uint)param_1 & 0xffffff00;
    if (*(char *)(*(uint *)(param_1 + 0xc) + *(int *)(param_1 + 0x14)) != '\x1a') {
      return uVar2;
    }
  }
  else {
    cVar1 = FUN_00406ed4(param_1);
    uVar2 = CONCAT31(extraout_var,cVar1);
    if (cVar1 != '\x1a') {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      return (uint)extraout_var << 8;
    }
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

