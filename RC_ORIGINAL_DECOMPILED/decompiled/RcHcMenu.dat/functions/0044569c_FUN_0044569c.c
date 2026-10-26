/*
 * FUN_0044569c at 0044569c
 * undefined __register FUN_0044569c(int * param_1, int param_2, int param_3)
 * Address ranges: 0044569c-0044576d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4404a0 slot 16 for TPopupMenu. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4404a0 slot 16 for
   TPopupMenu. Original bytes unchanged; names and types still inferred. */

void FUN_0044569c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  HMENU hMenu;
  int nReserved;
  HWND hWnd;
  RECT *prcRect;
  int local_18;
  int local_14;
  
  FUN_0041160c(param_2,param_3,&local_18);
  param_1[0x12] = local_18;
  param_1[0x13] = local_14;
  FUN_00445608(param_1);
  (**(code **)(*param_1 + 0x3c))(param_1,param_1);
  FUN_00443b08(param_1[10],'\0');
  FUN_00443fd8(param_1[10],'\0');
  FUN_004415b8((int *)param_1[10]);
  FUN_004448bc(param_1);
  uVar1 = FUN_00445650((int)param_1);
  uVar1 = (uint)(*(ushort *)
                  (&DAT_0056f9c0 + (uint)*(byte *)(param_1 + 0x14) * 2 + (uVar1 & 0x7f) * 6) |
                *(ushort *)(&DAT_0056f9cc + (uint)*(byte *)(param_1 + 0x16) * 2));
  if ((4 < *(int *)PTR_DAT_005721f0) ||
     ((*(int *)PTR_DAT_005721f0 == 4 && (0 < *(int *)PTR_DAT_00572464)))) {
    uVar1 = uVar1 | (uint)*(byte *)((int)param_1 + 0x59) << 10;
  }
  prcRect = (RECT *)0x0;
  hWnd = *(HWND *)(DAT_005737c4 + 0x10);
  nReserved = 0;
  hMenu = (HMENU)FUN_0044169c(param_1[10]);
  TrackPopupMenu(hMenu,uVar1,param_2,param_3,nReserved,hWnd,prcRect);
  return;
}

