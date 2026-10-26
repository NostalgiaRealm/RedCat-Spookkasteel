/*
 * FUN_0040471c at 0040471c
 * undefined __register FUN_0040471c(int * param_1, UINT param_2)
 * Address ranges: 0040471c-0040475c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040471c(int *param_1,UINT param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (0 < (int)param_2) {
    puVar2 = (undefined4 *)FUN_004046b8(param_2);
    uVar1 = FUN_004045c8(*param_1);
    if (0 < (int)uVar1) {
      if ((int)param_2 < (int)uVar1) {
        uVar1 = param_2;
      }
      FUN_00402944((undefined4 *)*param_1,puVar2,uVar1 * 2);
    }
  }
  FUN_00404464(param_1,puVar2);
  return;
}

