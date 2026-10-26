/*
 * FUN_0047befa at 0047befa
 * int __register FUN_0047befa(void)
 * Address ranges: 0047befa-0047bf43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0047befa(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar1 = -1;
  iVar3 = 0;
  if (0 < in_stack_00000004) {
    do {
      if (*(BYTE *)(in_stack_00000008 + iVar3) == '\0') {
        return -1;
      }
      if (iVar1 == 1) {
        iVar1 = 2;
      }
      else {
        BVar2 = IsDBCSLeadByte(*(BYTE *)(in_stack_00000008 + iVar3));
        if (BVar2 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_stack_00000004);
  }
  return iVar1;
}

