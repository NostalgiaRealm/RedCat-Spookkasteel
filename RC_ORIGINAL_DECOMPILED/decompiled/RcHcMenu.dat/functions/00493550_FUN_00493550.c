/*
 * FUN_00493550 at 00493550
 * undefined __register FUN_00493550(int * param_1, int * param_2)
 * Address ranges: 00493550-0049359d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00493550(int *param_1,int *param_2)

{
  undefined4 uVar1;
  byte local_2c [28];
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_2);
  (**(code **)(*local_8 + 0x28))(local_8,local_2c);
  local_10 = (int *)FUN_00494c5c(local_8,local_2c);
  if (local_10 != (int *)0x0) {
    uVar1 = FUN_00496b30(local_10);
    if ((char)uVar1 != '\0') {
      FUN_004966b4(local_10,local_c);
    }
  }
  return;
}

