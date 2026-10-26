/*
 * FUN_00595cd0 at 00595cd0
 * undefined FUN_00595cd0(void)
 * Address ranges: 00595cd0-00595d2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00595cd0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  FUN_005b3070();
  iVar1 = FUN_00595c80();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00595c80();
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x48))(local_c);
    local_18 = *puVar3;
    local_14 = puVar3[1];
    local_10 = puVar3[2];
  }
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  return;
}

