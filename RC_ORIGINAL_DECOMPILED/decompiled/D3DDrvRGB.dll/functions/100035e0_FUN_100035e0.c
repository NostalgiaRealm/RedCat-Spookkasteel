/*
 * FUN_100035e0 at 100035e0
 * undefined4 __cdecl FUN_100035e0(int param_1, int param_2)
 * Address ranges: 100035e0-1000363d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_100035e0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (DAT_10028934 != 0) {
    bVar2 = param_1 != 0;
    if (param_2 != 0) {
      bVar2 = bVar2 | 2;
    }
    iVar1 = (**(code **)(*DAT_1001bcd0 + 0x28))(DAT_1001bcd0,1,0,bVar2,0,0x3f800000,0);
    if (iVar1 != 0) {
      FUN_10001000(iVar1);
      FUN_10005fc0((byte *)s_Viewport_clear_failed___s_10017648);
      return 0;
    }
  }
  return 1;
}

