/*
 * FUN_1000ba50 at 1000ba50
 * undefined FUN_1000ba50(void)
 * Address ranges: 1000ba50-1000bbbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000ba50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iStack_104;
  CHAR local_100 [256];
  
  puVar3 = &DAT_10265cf8;
  for (iVar2 = 0x2b000; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  GetCurrentDirectoryA(0x100,local_100);
  iVar4 = 0;
  iVar2 = FUN_10014700(param_1,0,1);
  if (iVar2 == 0) {
    (*DAT_1014e358)(s_LoadBrushFile__Error_opening_Bru_100386ec,param_1);
    return 0;
  }
  (*DAT_1014e35c)(s_____Load_Brush_File_____100386d0);
  iVar1 = FUN_10014a00(0xc);
  if (iVar1 == 0) {
    FUN_10014990();
    (*DAT_1014e358)(s_LoadBrushFile__There_was_an_erro_10038698);
    return 0;
  }
  DAT_10265cec = 0;
  DAT_10311cf8 = 0;
  DAT_10265ce8 = 0;
  DAT_10265cf0 = 0;
  DAT_10311cfc = 0;
  if (0 < iStack_104) {
    do {
      iVar1 = FUN_1000bc80(iVar2);
      if (iVar1 == 0) {
        FUN_10014990();
        (*DAT_1014e358)(s_LoadBrushFile__Could_not_load_en_100385d0);
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iStack_104);
  }
  FUN_10014990();
  (*DAT_1014e35c)(s_Num_Solid_Brushes____5i_10038678,DAT_10265cec);
  (*DAT_1014e35c)(s_Num_Cut_Brushes____5i_10038658,DAT_10311cf8);
  (*DAT_1014e35c)(s_Num_Hollow_Cut_Brushes____5i_10038638,DAT_10265ce8);
  (*DAT_1014e35c)(s_Num_Detail_Brushes____5i_10038618,DAT_10265cf0);
  (*DAT_1014e35c)(s_Num_Total_Brushes____5i_100385f8,DAT_10311cfc);
  return 1;
}

