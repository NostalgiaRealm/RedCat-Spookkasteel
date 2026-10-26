/*
 * FUN_0047c351 at 0047c351
 * FARPROC __register FUN_0047c351(void)
 * Address ranges: 0047c351-0047c3b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

FARPROC FUN_0047c351(void)

{
  int *piVar1;
  int iVar2;
  FARPROC pFVar3;
  uint uVar4;
  undefined4 *in_stack_00000004;
  
  piVar1 = (int *)*in_stack_00000004;
  iVar2 = FUN_0047c0a8();
  if (iVar2 == 0) {
    pFVar3 = (FARPROC)0x2a06;
  }
  else {
    if ((*piVar1 == 0) && (uVar4 = FUN_0047c2c2(), (short)uVar4 != 0)) {
      return (FARPROC)(uVar4 & 0xffff);
    }
    pFVar3 = GetProcAddress((HMODULE)*piVar1,(LPCSTR)(uint)*(ushort *)(in_stack_00000004 + 2));
    if (pFVar3 == (FARPROC)0x0) {
      pFVar3 = (FARPROC)0x274f;
    }
    else {
      FUN_0047c33b();
      FUN_0047c111();
    }
  }
  return pFVar3;
}

