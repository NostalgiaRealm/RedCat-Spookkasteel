/*
 * FUN_004182fc at 004182fc
 * undefined4 __register FUN_004182fc(void)
 * Address ranges: 004182fc-0041834d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004182fc(void)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  float10 in_ST0;
  int in_stack_00000004;
  
  uVar3 = FUN_00417f94();
  uVar4 = (undefined2)((uint)in_stack_00000004 >> 0x10);
  if ((char)uVar3 != '\0') {
    FUN_0040fdf4(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x20),
                 *(undefined4 **)(*(int *)(in_stack_00000004 + 8) + -0xc));
    fVar1 = *(float10 *)(in_stack_00000004 + -0x10);
    return CONCAT31((int3)(CONCAT22(uVar4,(ushort)(fVar1 < in_ST0) << 8 |
                                          (ushort)(NAN(fVar1) || NAN(in_ST0)) << 10 |
                                          (ushort)(fVar1 == in_ST0) << 0xe) >> 8),
                    (fVar1 == in_ST0) != 0);
  }
  fVar1 = *(float10 *)(in_stack_00000004 + -0x10);
  fVar2 = (float10)0.0;
  return CONCAT31((int3)(CONCAT22(uVar4,(ushort)(fVar1 < fVar2) << 8 |
                                        (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                                        (ushort)(fVar1 == fVar2) << 0xe) >> 8),(fVar1 == fVar2) != 0
                 );
}

