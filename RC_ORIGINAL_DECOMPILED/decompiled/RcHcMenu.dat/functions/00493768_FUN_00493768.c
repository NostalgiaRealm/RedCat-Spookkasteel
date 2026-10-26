/*
 * FUN_00493768 at 00493768
 * undefined __register FUN_00493768(int * param_1, int * param_2)
 * Address ranges: 00493768-004938d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00493768(int *param_1,int *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_FS_OFFSET;
  int iStack_248;
  char *pcStack_244;
  int *piStack_240;
  char *pcStack_23c;
  char *pcStack_238;
  int iStack_234;
  int iStack_230;
  undefined1 *puStack_22c;
  undefined1 *puStack_228;
  byte local_224 [256];
  int local_124;
  int local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  byte local_d;
  int *local_c;
  int *local_8;
  
  puStack_228 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_124 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_22c = &LAB_0049390a;
  iStack_230 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_230;
  puVar2 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == (int *)0x0) {
    iStack_234 = 0x4937b5;
    FUN_00402fe0(*param_1,local_118);
    iStack_234 = 0x4937c3;
    FUN_00403fd4(&local_18,local_118);
    iStack_234 = local_18;
    pcStack_238 = ".Assign: ";
    pcStack_23c = "Other not assigned";
    piStack_240 = (int *)0x4937dd;
    FUN_004040f0(&local_14,3);
    piStack_240 = (int *)0x4937ef;
    FUN_00403d94(local_14);
    puVar2 = puStack_228;
  }
  puStack_228 = puVar2;
  piStack_240 = (int *)0x4937f7;
  piStack_240 = (int *)FUN_00494858(local_8);
  pcStack_244 = (char *)0x493800;
  puVar3 = (undefined4 *)FUN_00494858(local_c);
  pcStack_244 = (char *)0x493805;
  iVar4 = FUN_00402fdc(puVar3);
  piVar1 = piStack_240;
  piStack_240 = (int *)0x49380d;
  uVar5 = FUN_0040320c(piVar1,iVar4);
  if ((char)uVar5 == '\0') {
    piStack_240 = (int *)0x493821;
    FUN_00402fe0(*local_8,local_118);
    piStack_240 = (int *)0x493832;
    FUN_00403fd4(&local_120,local_118);
    piStack_240 = (int *)local_120;
    pcStack_244 = ".Assign: ";
    iStack_248 = 0x49384d;
    FUN_00402fe0(*local_c,local_224);
    iStack_248 = 0x49385e;
    FUN_00403fd4(&local_124,local_224);
    iStack_248 = local_124;
    FUN_004040f0(&local_11c,4);
    FUN_00403d94(local_11c);
  }
  piStack_240 = (int *)0x493896;
  FUN_0045f830((int)local_8);
  piStack_240 = (int *)0x49389e;
  FUN_0045f864((int)local_8);
  pcStack_244 = &LAB_004938d8;
  iStack_248 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_248;
  piStack_240 = (int *)&stack0xfffffffc;
  local_d = FUN_00494144(local_8,local_c);
  *in_FS_OFFSET = iStack_248;
  piStack_240 = (int *)&LAB_004938df;
  pcStack_244 = (char *)0x4938cf;
  FUN_0045f898(local_8);
  pcStack_244 = (char *)0x4938d7;
  FUN_0045f938(local_8);
  return;
}

