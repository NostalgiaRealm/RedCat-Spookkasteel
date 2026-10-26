/*
 * FUN_0043557c at 0043557c
 * undefined __register FUN_0043557c(int param_1, int * param_2)
 * Address ranges: 0043557c-004355c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043557c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (param_2 != (int *)0x0) {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0042ebec);
    if ((char)uVar1 == '\0') {
      FUN_004311c0((int *)(param_1 + 0x134),(int)param_2,extraout_ECX);
    }
    else {
      FUN_004311c0((int *)(param_1 + 0x180),(int)param_2,extraout_ECX);
      FUN_004311c0((int *)(param_1 + 0x16c),(int)param_2,extraout_ECX_00);
    }
    param_2[9] = param_1;
  }
  return;
}

