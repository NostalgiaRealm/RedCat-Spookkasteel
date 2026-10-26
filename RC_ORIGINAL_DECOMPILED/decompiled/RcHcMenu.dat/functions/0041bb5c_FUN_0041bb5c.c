/*
 * FUN_0041bb5c at 0041bb5c
 * undefined __register FUN_0041bb5c(int param_1)
 * Address ranges: 0041bb5c-0041bcbc;0041bcc4-0041bce4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041bb5c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  HFONT pHVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined *local_50;
  undefined *local_4c;
  undefined *local_48;
  LOGFONTA local_44;
  int local_8;
  
  puStack_58 = &stack0xfffffffc;
  local_50 = (undefined *)0x0;
  local_4c = (undefined *)0x0;
  local_48 = (undefined *)0x0;
  puStack_5c = &LAB_0041bce5;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_64 = (undefined1 *)0x41bb9b;
    FUN_0041af88(DAT_0057369c);
    puStack_68 = &LAB_0041bcbd;
    uStack_6c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_6c;
    if (*(int *)(local_8 + 8) == 0) {
      local_44.lfHeight = *(LONG *)(local_8 + 0x14);
      local_44.lfWidth = 0;
      local_44.lfEscapement = 0;
      local_44.lfOrientation = 0;
      if ((*(byte *)(local_8 + 0x19) & 1) == 0) {
        local_44.lfWeight = 400;
      }
      else {
        local_44.lfWeight = 700;
      }
      local_44.lfItalic = (*(byte *)(local_8 + 0x19) & 2) != 0;
      local_44.lfUnderline = (*(byte *)(local_8 + 0x19) & 4) != 0;
      local_44.lfStrikeOut = (*(byte *)(local_8 + 0x19) & 8) != 0;
      local_44.lfCharSet = *(BYTE *)(local_8 + 0x1a);
      puStack_64 = &stack0xfffffffc;
      FUN_00403fd4((int *)&local_48,(byte *)(local_8 + 0x1b));
      iVar1 = FUN_00409870(local_48,"Default");
      if (iVar1 == 0) {
        FUN_00403fd4((int *)&local_4c,(byte *)s_MS_Sans_Serif_0056f3ef);
        FUN_0040a1cc(local_44.lfFaceName,local_4c);
      }
      else {
        FUN_00403fd4((int *)&local_50,(byte *)(local_8 + 0x1b));
        FUN_0040a1cc(local_44.lfFaceName,local_50);
      }
      local_44.lfQuality = '\0';
      local_44.lfOutPrecision = '\0';
      local_44.lfClipPrecision = '\0';
      uVar2 = FUN_0041be40(param_1);
      if ((char)uVar2 == '\x01') {
        local_44.lfPitchAndFamily = '\x02';
      }
      else if ((char)uVar2 == '\x02') {
        local_44.lfPitchAndFamily = '\x01';
      }
      else {
        local_44.lfPitchAndFamily = '\0';
      }
      pHVar3 = CreateFontIndirectA(&local_44);
      *(HFONT *)(local_8 + 8) = pHVar3;
    }
    *in_FS_OFFSET = uStack_6c;
    puStack_64 = (undefined1 *)0x41bcc4;
    puStack_68 = (undefined1 *)0x41bcbc;
    FUN_0041af94(DAT_0057369c);
    return;
  }
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_0041bcec;
  puStack_5c = (undefined1 *)0x41bce4;
  FUN_00403dd4((int *)&local_50,3);
  return;
}

