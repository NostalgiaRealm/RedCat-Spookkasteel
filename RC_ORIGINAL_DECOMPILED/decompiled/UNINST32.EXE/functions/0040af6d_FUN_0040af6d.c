/*
 * FUN_0040af6d at 0040af6d
 * undefined __stdcall FUN_0040af6d(void)
 * Address ranges: 0040af6d-0040b02b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040af6d(void)

{
  HDC hdc;
  UINT UVar1;
  char local_104 [256];
  
  hdc = GetDC(DAT_00413698);
  GetPrivateProfileStringA
            (s_Settings_00412138,s_Text_Font_00412810,&DAT_004134d0,local_104,0x100,DAT_00413abc);
  if (local_104[0] != '\0') {
    DAT_0041369c = (LPSTR)FUN_0040b671(0x100);
    lstrcpyA(DAT_0041369c,local_104);
  }
  UVar1 = GetPrivateProfileIntA(s_Settings_00412138,s_Font_Character_Set_004127fc,0,DAT_00413abc);
  DAT_004136e4 = (char)UVar1;
  UVar1 = GetPrivateProfileIntA(s_Settings_00412138,s_Font_Character_Size_004127e8,8,DAT_00413abc);
  DAT_00413740 = (char)UVar1;
  GetDeviceCaps(hdc,0xe);
  GetDeviceCaps(hdc,0xc);
  DAT_004137a0 = GetDeviceCaps(hdc,8);
  DAT_004137a4 = GetDeviceCaps(hdc,10);
  return;
}

