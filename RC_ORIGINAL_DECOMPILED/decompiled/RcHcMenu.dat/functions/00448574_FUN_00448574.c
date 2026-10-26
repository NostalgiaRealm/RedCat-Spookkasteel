/*
 * FUN_00448574 at 00448574
 * HWND __register FUN_00448574(void)
 * Address ranges: 00448574-00448620
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HWND FUN_00448574(void)

{
  BOOL BVar1;
  HWND hWnd;
  undefined1 *dwNewLong;
  undefined4 in_stack_00000004;
  tagWNDCLASSA local_2c;
  
  _DAT_0056fa00 = DAT_005734dc;
  BVar1 = GetClassInfoA(DAT_005734dc,PTR_s_TPUtilWindow_0056fa14,&local_2c);
  if ((BVar1 == 0) || (local_2c.lpfnWndProc != DefWindowProcA)) {
    if (BVar1 != 0) {
      UnregisterClassA(PTR_s_TPUtilWindow_0056fa14,DAT_005734dc);
    }
    RegisterClassA((WNDCLASSA *)&DAT_0056f9f0);
  }
  hWnd = CreateWindowExA(0x80,PTR_s_TPUtilWindow_0056fa14,"",0x80000000,0,0,0,0,(HWND)0x0,(HMENU)0x0
                         ,DAT_005734dc,(LPVOID)0x0);
  if (in_stack_00000004._2_2_ != 0) {
    dwNewLong = FUN_004484b8();
    SetWindowLongA(hWnd,-4,(LONG)dwNewLong);
  }
  return hWnd;
}

