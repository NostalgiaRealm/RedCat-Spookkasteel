/*
 * FUN_00561ac8 at 00561ac8
 * int * __register FUN_00561ac8(int * param_1, char param_2, int * param_3)
 * Address ranges: 00561ac8-00561bad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 11 for TMediaPlayer. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x561588 slot 11 for
   TMediaPlayer. Original bytes unchanged; names and types still inferred. */

int * FUN_00561ac8(int *param_1,char param_2,int *param_3)

{
  byte bVar1;
  int *extraout_ECX;
  char extraout_DL;
  char cVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0043a330(param_1,'\0',param_3);
  param_1[0x10] = param_1[0x10] | 0x40;
  FUN_00561c2c((int)param_1);
  *(undefined2 *)(param_1 + 0xa2) = 0x1ff;
  *(undefined2 *)((int)param_1 + 0x28a) = 0x1ff;
  *(undefined2 *)(param_1 + 0xa3) = 0x1ff;
  bVar1 = 0;
  do {
    uVar3 = (uint)bVar1;
    *(undefined1 *)(param_1 + uVar3 * 4 + 0x7e) = 1;
    *(undefined1 *)((int)param_1 + uVar3 * 0x10 + 0x1f9) = 1;
    *(undefined1 *)((int)param_1 + uVar3 * 0x10 + 0x1fa) = 1;
    *(undefined1 *)((int)param_1 + uVar3 * 0x10 + 0x1fb) = 0;
    bVar1 = bVar1 + 1;
  } while (bVar1 != 9);
  FUN_00431f78(param_1,0xf0);
  FUN_00431f98(param_1,0x1e);
  *(undefined1 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 1;
  *(undefined1 *)((int)param_1 + 0x305) = 0;
  *(undefined1 *)((int)param_1 + 0x306) = 1;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  FUN_00438bb4((int)param_1,'\x01');
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

