/*
 * FUN_005c9a20 at 005c9a20
 * undefined FUN_005c9a20(void)
 * Address ranges: 005c9a20-005c9a69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c9a20(DWORD *param_1)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  if (BVar1 == 0) {
    FUN_005cf220(0xd,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006aa3f4,0x19d,&DAT_006b3f70,0
                );
    return 0;
  }
  *param_1 = local_8.s.LowPart;
  return 1;
}

