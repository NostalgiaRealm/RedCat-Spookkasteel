/*
 * FUN_00410e30 at 00410e30
 * undefined FUN_00410e30(void)
 * Address ranges: 00410e30-00410ee8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_00410e30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 local_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00620dc8;
  local_c = ExceptionList;
  if ((1 < param_1) && (param_1 < 4)) {
    return (&PTR_FUN_0064af10)[param_1];
  }
  ExceptionList = &local_c;
  uVar2 = FUN_005ae390(local_1c,s_Invalid_subtype__d_for_bat_0068e9e0,param_1);
  local_4 = 0;
  pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcShoo_0068e9b4,0x62,
                                uVar2);
  (*pcVar3)();
  if (iStack_18 != 0) {
    cVar1 = *(char *)(iStack_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return &DAT_006b3f70;
    }
    FUN_005fe5f0((char *)(iStack_18 + -1));
  }
  ExceptionList = local_c;
  return &DAT_006b3f70;
}

