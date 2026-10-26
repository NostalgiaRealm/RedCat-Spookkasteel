/*
 * FUN_005085d4 at 005085d4
 * undefined __register FUN_005085d4(int * param_1)
 * Address ranges: 005085d4-00508764
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5073b8 slot 45 for TDaviCalendar. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5073b8 slot 45 for
   TDaviCalendar. Original bytes unchanged; names and types still inferred. */

void FUN_005085d4(int *param_1)

{
  BOOL BVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  RECT *pRVar2;
  tagRECT local_3c;
  RECT local_2c;
  tagRECT local_1c;
  int *local_c;
  int *local_8;
  
  local_c = (int *)param_1[0x7c];
  local_8 = param_1;
  FUN_0041c318((int *)local_c[5],param_1[0x18]);
  (**(code **)(*local_8 + 0x40))(local_8,&local_2c);
  FUN_0041c9f8(local_c,&local_2c);
  if ((char)local_8[0x98] != '\0') {
    (**(code **)(*local_8 + 0x40))(local_8,&local_1c);
    FUN_0041c034((int *)local_c[4],0);
    FUN_0041cb34(local_c,local_1c.left,local_1c.top,local_1c.bottom,local_1c.right);
  }
  FUN_0041c034((int *)local_c[4],0xffffff);
  FUN_0041c318((int *)local_c[5],0x80000005);
  FUN_0041bd70((int *)local_c[3],(undefined4 *)"MS Sans Serif");
  FUN_0041bde8((int *)local_c[3],8);
  FUN_0041be14((int *)local_c[3],0);
  FUN_005095f4(local_8,&local_2c.left);
  pRVar2 = &local_2c;
  FUN_0041cf48(local_c,&local_3c);
  BVar1 = IntersectRect(&local_1c,&local_3c,pRVar2);
  if (BVar1 != 0) {
    FUN_00507c4c((int)local_8);
  }
  pRVar2 = (RECT *)(local_8 + 0x80);
  FUN_0041cf48(local_c,&local_2c);
  BVar1 = IntersectRect(&local_1c,&local_2c,pRVar2);
  if (BVar1 != 0) {
    FUN_005081dc((uint)local_8);
  }
  FUN_00509620(local_8,&local_2c.left);
  pRVar2 = &local_2c;
  FUN_0041cf48(local_c,&local_3c);
  BVar1 = IntersectRect(&local_1c,&local_3c,pRVar2);
  if (BVar1 != 0) {
    FUN_0050806c((int)local_8,extraout_EDX,extraout_ECX);
  }
  FUN_0050964c(local_8,&local_2c.left);
  pRVar2 = &local_2c;
  FUN_0041cf48(local_c,&local_3c);
  BVar1 = IntersectRect(&local_1c,&local_3c,pRVar2);
  if (BVar1 != 0) {
    FUN_0050848c((int)local_8);
  }
  return;
}

