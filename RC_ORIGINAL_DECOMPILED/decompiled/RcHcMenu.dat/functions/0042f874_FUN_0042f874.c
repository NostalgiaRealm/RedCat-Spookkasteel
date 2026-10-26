/*
 * FUN_0042f874 at 0042f874
 * undefined4 __register FUN_0042f874(void)
 * Address ranges: 0042f874-0042f92b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0042f874(void)

{
  HANDLE pvVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 uVar4;
  HWND in_stack_00000004;
  
  *(HWND *)((int)DAT_0056f798 + 0x14c) = in_stack_00000004;
  SetWindowLongA(in_stack_00000004,-4,*(LONG *)((int)DAT_0056f798 + 0x15c));
  uVar2 = GetWindowLongA(in_stack_00000004,-0x10);
  if ((uVar2 & 0x40000000) != 0) {
    LVar3 = GetWindowLongA(in_stack_00000004,-0xc);
    if (LVar3 == 0) {
      SetWindowLongA(in_stack_00000004,-0xc,(LONG)in_stack_00000004);
    }
  }
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_0057375a,DAT_0056f798);
  SetPropA(in_stack_00000004,(LPCSTR)(uint)DAT_00573758,DAT_0056f798);
  pvVar1 = DAT_0056f798;
  DAT_0056f798 = (HANDLE)0x0;
  uVar4 = (**(code **)((int)pvVar1 + 0x15c))();
  return uVar4;
}

