/*
 * FUN_00431dc0 at 00431dc0
 * undefined __register FUN_00431dc0(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 00431dc0-00431e55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00431dc0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  cVar1 = FUN_00433bd4(param_1,&param_5,&param_4);
  if ((cVar1 != '\0') &&
     ((((param_2 != param_1[0xc] || (param_3 != param_1[0xd])) || (param_5 != param_1[0xe])) ||
      (param_4 != param_1[0xf])))) {
    FUN_00432b50((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
    param_1[0xc] = param_2;
    param_1[0xd] = param_3;
    param_1[0xe] = param_5;
    param_1[0xf] = param_4;
    FUN_00431e58((int)param_1);
    (**(code **)(*param_1 + 0x74))();
    FUN_00433700((int)param_1,0x47,0,0);
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      FUN_00403270(param_1,extraout_EDX_00,extraout_ECX_00);
    }
  }
  return;
}

