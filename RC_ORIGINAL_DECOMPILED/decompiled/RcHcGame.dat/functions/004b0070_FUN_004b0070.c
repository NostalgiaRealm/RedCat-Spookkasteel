/*
 * FUN_004b0070 at 004b0070
 * undefined FUN_004b0070(void)
 * Address ranges: 004b0070-004b0157
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004b0070(undefined4 *param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e59b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ab4a0();
  *param_1 = &PTR_FUN_0064e794;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = param_3;
  local_4 = 0;
  *(undefined1 *)(param_1 + 8) = *param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_0064eb44;
  if (param_3 == 0) {
    puVar4 = *(undefined1 **)(param_2 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar2 = FUN_005ae390(local_1c,s_Cannot_construct_font___s__witho_00696774,puVar4);
    local_4 = CONCAT31(local_4._1_3_,2);
    pcVar3 = (code *)FUN_005a07f0(s_a_Font__NULL_00696738,
                                  s_D__Work_RCHorror_AdamSource_Adam_00696748,0x1a,uVar2);
    (*pcVar3)();
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

