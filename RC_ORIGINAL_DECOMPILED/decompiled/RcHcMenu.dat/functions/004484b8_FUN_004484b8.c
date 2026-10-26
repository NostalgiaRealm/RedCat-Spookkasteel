/*
 * FUN_004484b8 at 004484b8
 * undefined1 * __register FUN_004484b8(void)
 * Address ranges: 004484b8-0044854f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_004484b8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  puVar1 = DAT_005737e0;
  if (DAT_005737e4 == (undefined1 *)0x0) {
    puVar1 = VirtualAlloc((LPVOID)0x0,0x1000,0x1000,0x40);
    *puVar1 = DAT_005737e0;
    FUN_00402944((undefined4 *)&DAT_0056f9ec,puVar1 + 1,2);
    iVar2 = FUN_004484b0((int)puVar1 + 5,0x448490);
    *(int *)((int)puVar1 + 6) = iVar2;
    puVar3 = (undefined1 *)((int)puVar1 + 10);
    do {
      puVar4 = puVar3;
      *puVar4 = 0xe8;
      iVar2 = FUN_004484b0((int)puVar4,(int)(puVar1 + 1));
      *(int *)(puVar4 + 1) = iVar2;
      *(undefined1 **)(puVar4 + 5) = DAT_005737e4;
      puVar3 = puVar4 + 0xd;
      DAT_005737e4 = puVar4;
    } while ((int)(puVar4 + 0xd) - (int)puVar1 < 0xffc);
  }
  DAT_005737e0 = puVar1;
  puVar3 = DAT_005737e4;
  puVar1 = (undefined4 *)(DAT_005737e4 + 5);
  DAT_005737e4 = (undefined1 *)*(undefined4 *)(DAT_005737e4 + 5);
  *puVar1 = in_stack_00000004;
  *(undefined4 *)(puVar3 + 9) = in_stack_00000008;
  return puVar3;
}

