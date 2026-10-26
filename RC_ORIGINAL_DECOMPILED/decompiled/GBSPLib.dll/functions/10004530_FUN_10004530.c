/*
 * FUN_10004530 at 10004530
 * undefined FUN_10004530(void)
 * Address ranges: 10004530-10004683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004530(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  FUN_10014ac0();
  iVar4 = 0;
  uStack_c = 0x18;
  uStack_8 = 0;
  iStack_4 = 1;
  FUN_10004d50(&uStack_c,0,param_1);
  FUN_10014a60(param_1,s_Genesis_Motion_File_v1_0_10036ab0);
  iVar3 = 0;
  if (0 < DAT_10311d00) {
    piVar1 = &DAT_10265cfc;
    iVar2 = DAT_10311d00;
    do {
      if ((piVar1[-1] != 0) && (*piVar1 != 0)) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = piVar1 + 0x2b;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_10014a60(param_1,s_NumMotions__i_10036aa0,iVar3);
  if (0 < DAT_10311d00) {
    piVar1 = &DAT_10265cfc;
    do {
      if ((piVar1[-1] != 0) && (*piVar1 != 0)) {
        FUN_10014a60(param_1,s_ModelNum__i_10036a90,piVar1[2]);
        iVar3 = FUN_100154d0();
        if (iVar3 == 0) {
          (*DAT_1014e358)(s_Error_saving_motion_data__10036a74);
          return 0;
        }
        FUN_10014cc0();
        *piVar1 = 0;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 0x2b;
    } while (iVar4 < DAT_10311d00);
  }
  FUN_10014ac0();
  FUN_10014a40(2);
  iStack_4 = (iStack_10 - param_1) + -0xc;
  uStack_c = 0x18;
  uStack_8 = 1;
  FUN_10004d50(&uStack_c,0,param_1);
  FUN_10014a40(2);
  DAT_1014e2f0 = iStack_4;
  return 1;
}

