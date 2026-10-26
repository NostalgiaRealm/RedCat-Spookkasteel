/*
 * FUN_0047c2c2 at 0047c2c2
 * undefined4 __register FUN_0047c2c2(void)
 * Address ranges: 0047c2c2-0047c33a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0047c2c2(void)

{
  undefined4 *puVar1;
  HMODULE pHVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  int in_stack_00000004;
  ushort local_8;
  
  local_8 = 0;
  puVar1 = (undefined4 *)FUN_0047c203();
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x2501;
  }
  else {
    pHVar2 = GetModuleHandleA((LPCSTR)(in_stack_00000004 + 6));
    if (pHVar2 == (HMODULE)0x0) {
      pHVar2 = FUN_0047c129();
      if (pHVar2 == (HMODULE)0x0) {
        FUN_0047c20d();
        return CONCAT22(extraout_var,0x210a);
      }
      local_8 = 1;
    }
    *puVar1 = pHVar2;
    *(ushort *)((int)puVar1 + 0x2e) = *(ushort *)((int)puVar1 + 0x2e) | local_8;
    FUN_0047c20d();
    FUN_0047c546();
    uVar3 = 0;
  }
  return uVar3;
}

