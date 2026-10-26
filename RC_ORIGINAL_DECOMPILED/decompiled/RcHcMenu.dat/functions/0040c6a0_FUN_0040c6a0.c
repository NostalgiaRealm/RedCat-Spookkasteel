/*
 * FUN_0040c6a0 at 0040c6a0
 * undefined __register FUN_0040c6a0(DWORD param_1, int * param_2)
 * Address ranges: 0040c6a0-0040c6ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040c6a0(DWORD param_1,int *param_2)

{
  uint uVar1;
  CHAR local_104 [256];
  
  uVar1 = FormatMessageA(0x3000,(LPCVOID)0x0,param_1,0,local_104,0x100,(va_list *)0x0);
  for (; (0 < (int)uVar1 && (((byte)local_104[uVar1 - 1] < 0x21 || (local_104[uVar1 - 1] == 0x2e))))
      ; uVar1 = uVar1 - 1) {
  }
  FUN_00403e98(param_2,(undefined4 *)local_104,uVar1);
  return;
}

