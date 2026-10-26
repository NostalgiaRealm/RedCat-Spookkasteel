/*
 * FUN_0043e508 at 0043e508
 * undefined __register FUN_0043e508(int * param_1, int param_2)
 * Address ranges: 0043e508-0043e54b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e508(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 != param_1[9]) {
    param_1[9] = param_2;
    bVar1 = FUN_0043e3b4((int)param_1);
    if (bVar1) {
      ImageList_SetIconSize((HIMAGELIST)param_1[0xc],param_1[10],param_1[9]);
    }
    FUN_0043ebc4(param_1);
    FUN_0043e3c8((int)param_1);
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}

