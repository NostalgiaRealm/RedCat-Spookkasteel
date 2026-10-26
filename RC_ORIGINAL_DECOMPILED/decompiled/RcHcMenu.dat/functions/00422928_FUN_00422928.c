/*
 * FUN_00422928 at 00422928
 * undefined __register FUN_00422928(int param_1, int * param_2, int * param_3)
 * Address ranges: 00422928-00422963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 5 for TIcon. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41ae18 slot 5 for TIcon.
   Original bytes unchanged; names and types still inferred. */

void FUN_00422928(int param_1,int *param_2,int *param_3)

{
  HICON hIcon;
  int cxWidth;
  int cyWidth;
  UINT istepIfAniCur;
  HBRUSH hbrFlickerFreeDraw;
  UINT diFlags;
  
  FUN_0041d040(param_2,1);
  diFlags = 3;
  hbrFlickerFreeDraw = (HBRUSH)0x0;
  istepIfAniCur = 0;
  cyWidth = 0;
  cxWidth = 0;
  hIcon = (HICON)FUN_00422980(param_1);
  DrawIconEx((HDC)param_2[1],*param_3,param_3[1],hIcon,cxWidth,cyWidth,istepIfAniCur,
             hbrFlickerFreeDraw,diFlags);
  return;
}

