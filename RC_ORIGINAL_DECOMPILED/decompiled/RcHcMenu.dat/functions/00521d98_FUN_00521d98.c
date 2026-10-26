/*
 * FUN_00521d98 at 00521d98
 * undefined __register FUN_00521d98(int * param_1, int * param_2, undefined4 param_3, byte param_4, RECT * param_5)
 * Address ranges: 00521d98-00521e58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521d98(int *param_1,int *param_2,undefined4 param_3,byte param_4,RECT *param_5)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  FUN_0041ce68((int)param_2);
  if ((param_4 & 1) != 0) {
    cVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    if (((cVar1 != '\0') || ((char)param_1[0x89] == '\0')) ||
       (*(char *)((int)param_1 + 0x22d) != '\0')) {
      cVar1 = FUN_00403270(param_1,extraout_EDX_00,extraout_ECX_00);
      if (cVar1 == '\0') {
        FUN_0041c318((int *)param_2[5],param_1[0x86]);
      }
      else {
        FUN_0041c318((int *)param_2[5],0x8000000d);
      }
      FUN_0041c9f8(param_2,param_5);
      FUN_0041bb48((int *)param_2[3],-0x7ffffff2,extraout_ECX_01);
    }
  }
  if (((param_4 & 2) != 0) && ((char)param_1[0x8e] == '\0')) {
    FUN_0041c97c(param_2,param_5);
  }
  return;
}

