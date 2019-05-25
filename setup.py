import setuptools

mynimal_ext = setuptools.Extension('_mynimal', sources=['_mynimal.c'])

setuptools.setup(
        name='mynimal',
        ext_modules = [mynimal_ext],
        )
