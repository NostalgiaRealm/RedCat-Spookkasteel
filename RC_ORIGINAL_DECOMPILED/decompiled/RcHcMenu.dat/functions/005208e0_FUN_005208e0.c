/*
 * FUN_005208e0 at 005208e0
 * int * __register FUN_005208e0(int * param_1, char param_2, int * param_3)
 * Address ranges: 005208e0-00520a59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005208e0(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004ef330(param_1,'\0',param_3);
  FUN_004328c4((int)param_1,'\0');
  FUN_004328a0((int)param_1,-0x7ffffffb);
  FUN_00431f78(param_1,0x15e);
  FUN_00431f98(param_1,200);
  param_1[0x80] = -0x80000000;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0x81] = 0x40;
  param_1[0x82] = 0x12;
  *(undefined1 *)(param_1 + 0x83) = 1;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)((int)param_1 + 0x20e) = 0x1f;
  *(undefined1 *)((int)param_1 + 0x20f) = 7;
  param_1[0x84] = -0x7ffffff1;
  param_1[0x85] = -0x7fffffec;
  param_1[0x86] = -0x7ffffff0;
  param_1[0x87] = -0x7fffffea;
  param_1[0x88] = -0x7fffffeb;
  param_1[0x8a] = 0xc0c0c0;
  *(undefined1 *)(param_1 + 0x8b) = 1;
  FUN_00403e04(param_1 + 0x8f,(undefined4 *)"Beeldopties");
  *(undefined1 *)(param_1 + 0x91) = 0;
  param_1[0x90] = 0;
  param_1[0xa2] = 0;
  FUN_00438bb4((int)param_1,'\x01');
  (**(code **)(*param_1 + 0xb8))();
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

