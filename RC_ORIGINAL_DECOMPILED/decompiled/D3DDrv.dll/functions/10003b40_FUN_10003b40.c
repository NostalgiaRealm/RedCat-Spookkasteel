/*
 * FUN_10003b40 at 10003b40
 * undefined4 __stdcall FUN_10003b40(void)
 * Address ranges: 10003b40-10003c0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003b40(void)

{
  int iVar1;
  
  FUN_100020f0(s_____D3DMain_CreateDevice_____100149ac);
  if (DAT_100274c8 != (int *)0x0) {
    (**(code **)(*DAT_100274c8 + 8))(DAT_100274c8);
    DAT_100274c8 = (int *)0x0;
  }
  iVar1 = (**(code **)(*DAT_100274ac + 0x20))
                    (DAT_100274ac,&DAT_1002b2f0 + DAT_10030624 * 0x938,DAT_100274b4,&DAT_100274c8,0)
  ;
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_D3DMain_CreateDevice__lpD3D_>Cre_10014970);
    return 0;
  }
  iVar1 = (**(code **)(*DAT_100274a8 + 0x6c))(DAT_100274a8,&DAT_10030628,0);
  if (iVar1 != 0) {
    FUN_10001000(iVar1);
    FUN_100020f0(s_D3DMain_CreateDevice__lpDD_>GetD_10014930);
    return 0;
  }
  FUN_100020f0(s_Vender_ID____6i_1001491c);
  FUN_100020f0(s_Device_ID____6i_10014908);
  return 1;
}

