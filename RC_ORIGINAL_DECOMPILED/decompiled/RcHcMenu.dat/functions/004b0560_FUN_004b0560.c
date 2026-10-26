/*
 * FUN_004b0560 at 004b0560
 * char __register FUN_004b0560(ushort param_1, ushort param_2, ushort param_3)
 * Address ranges: 004b0560-004b05f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_004b0560(ushort param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  BOOL BVar2;
  bool bVar3;
  DEVMODEA *lpDevMode;
  DEVMODEA local_ac;
  uint local_10;
  char local_b;
  ushort local_a;
  ushort local_8;
  ushort local_6;
  
  local_b = '\0';
  local_10 = 0;
  local_a = param_3;
  local_8 = param_2;
  local_6 = param_1;
  while( true ) {
    if (local_b != '\0') {
      return local_b;
    }
    lpDevMode = &local_ac;
    uVar1 = local_10;
    if ((int)local_10 < 0) {
      uVar1 = thunk_FUN_00402874(local_10);
    }
    BVar2 = EnumDisplaySettingsA((LPCSTR)0x0,uVar1,lpDevMode);
    if (BVar2 == 0) break;
    uVar1 = (uint)local_6;
    if (((uVar1 == local_ac.dmPelsWidth) && (uVar1 = (uint)local_8, uVar1 == local_ac.dmPelsHeight))
       && (uVar1 = (uint)local_a, uVar1 == local_ac.dmBitsPerPel)) {
      local_ac.dmFields = 0x1c0000;
      uVar1 = ChangeDisplaySettingsA(&local_ac,0);
      local_b = uVar1 == 0;
    }
    if ((local_b == '\0') && (bVar3 = SCARRY4(local_10,1), local_10 = local_10 + 1, bVar3)) {
      thunk_FUN_00402874(uVar1);
    }
  }
  return local_b;
}

